<?php

function _studi_kpmg_front() {
  global $base_url, $user;
  drupal_add_css(drupal_get_path('module', 'studi_kpmg') . '/studi_kpmg.css');

  $set_title = 'Wissenquiz KPMG | Studizone - Benefits for Students';

  $output = '';

  $output .= '<div id="kpmg-front">';
 
  // Render a random video of a company
  $output .=   '<div id="kpmg-front-container">';
  $output .=   '<div id="kpmg-front-container-pic">';
  $output .= '</div>';
  $output .= '<div id="kpmg-front-listing">';
  $output .= '<h3>KPMG Wissensquiz &ndash; auch 2012 wieder mitquizzen</h3>';
  $output .= '<div>F&uuml;r das KPMG&ndash;Wissensquiz bist du hier genau richtig! Am 7. M&auml;rz 2012 geht es mit der Aufw&auml;rmphase los, damit du dich optimal auf die Qualifikationsphase vom 19. M&auml;rz bis 6. April 2012 vorbereiten kannst.<br><br>
Wenn du zusammen mit deinen Kommilitonen den &quot;KPMG University Award 2012&quot; und damit einen Reisegutschein im Wert von 8&lsquo;000.&ndash; CHF gewinnen willst, dann musst du unbedingt mitspielen!<br><br><br><strong>Interessiert? Melde dich f&uuml;r weitere Infos mit deiner E&ndash;Mail Adresse an.<br></div>';

    $output .= drupal_get_form('studi_kpmg_front_form');
  /*$output .= '<div id="kpmg-front-text">';
  $output .= '<h2>KPMG Wissensquiz 2012</h2><p>KPMG sucht die Hochschule (Uni/ ETH/ FH) mit den cleversten Studierenden.<br><br>Teste dein Allgemeinwissen im grossen KPMG Wissensquiz. Vom 7. Bis am 11. M&auml;rz findet das WarmUp statt &minus; hier kannst du dich auf das Quiz vorbereiten und dich mit dem Spiel vertraut machen. Ab dem 19.3.2012 geht&rsquo;s dann los &minus; w&auml;hrend 3 Wochen (bis am 6.4.2012) kannst du in jeder Spielwoche von Montag bis Sonntag 5 Mal das Wissensquiz spielen - wann du spielst w&auml;hlst DU! Alle von dir erreichten Punkte werden addiert.<br><br>Geh&ouml;rst Du zu den drei Besten deiner Hochschule, hast du die Chance dich f&uuml;r deine Hochschule (Uni/ ETH/ FH) f&uuml;r das Live-Quiz im Kaufleuten zu qualifizieren. Das Hochschulteam das sich im Finale durchsetzt gewinnt ein unvergessliches Weekend in Barcelona, Berlin, Amsterdam oder London! Anreise, &Uuml;bernachtung und Taschengeld sind inbegriffen.<br><br>KPMG Wissensquiz 2012: Jetzt mitspielen! <br><br>Aktuelle Phase: Aufw&auml;rmen. <a href="'.$base_url.'/quiz/highscore/infos" rel="lightframe[|width:710;height:350;]">Infos...</a>';
  $output .= '<br>';

  $directory  = drupal_get_path('module', 'studi_kpmg');
  $img = theme('image', $directory .'/images/kpmg_log1.png');
  $output .= l($img, 'quiz/game', array('html' => 'true', 'attributes' => array('class' => 'kpmg_teil')));
  drupal_set_title($set_title);
    $output .= '</div>';
  $output .= '<div id="kpmg-front-box">';
  $output .= '<strong>Preise</strong><p class="kpmg_right_top_title">1. Preis</p><p>Reisegutschein f&uuml;r CHF 8000.-</p>
  <p class="kpmg_right_top_title">2.-5. Preis</p><p>Drei Reisegutscheine f&uuml;r je CHF 200.-</p>
    <p class="kpmg_right_top_title">2.-5. Preis</p><p>Drei Reisegutscheine f&uuml;r je CHF 200.-</p>';

  $output .= '</div>';
  $output .= '</div>';
    $output .= '<div id="kpmg-medium-box">';
  $output .= '<div id="kpmg-front-box-left">';
   $block_101 = module_invoke('block', 'block' , 'view', '101');
   $output .=  $block_101['content'];
   $output .= '</div>';
   $output .= '<div id="kpmg-front-box-right">';
   $output .=  '<div><table><tr><td>Anzahl Gegner</td><td>Hochschulen</td></tr><tr><td><h3>2300</h3></td><td><h3>14</h3></td></tr></table></div>';
   $output .= '</div>';
   $output .= '</div>';
   $output .= '<div id="kpmg-bottom-box">';
   $output .= '<div id="kpmg-bottom-box-left">';
   $output .= '<div class="kpmg-bottom-title"><h3>Beste Hochschulen</h3></div>';
   $output .=   '<div class="kpmg-bottom-crown"><table><tr><td><br><br><br><br>3. Platz<p class="kpmg-bottom-box-title">Universit&auml;t Bern</p></td><td><br>1. Platz<p class="kpmg-bottom-box-title">Universit&auml;t St.Gallen</p><td><td><br><br><br>2. Platz<p class="kpmg-bottom-box-title">Universit&auml;t Fribourg</p></td></tr></table></div>';
   $output .=   '<div id="kpmg-bottom-box-left-under"></div>';
    $output .= '<div class="kpmg_highscore_link"><a href="'.$base_url.'/quiz/highscore" rel="lightframe[|width:710;height:550;]">Mehr anzeigen...</a></div>';
   $output .= '</div>';
   $output .= '<div id="kpmg-bottom-box-right">';
   $output .= '<div class="kpmg-bottom-title"><h3>Beste Spieler</p></h3></div>';
      $output .=   '<div class="kpmg-bottom-crown"><table><tr><td><br><br><br><br>3. Platz<p class="kpmg-bottom-box-title">Frank the Tank</p></td><td><br>1. Platz<p class="kpmg-bottom-box-title">Sunny Balboa</p><td><td><br><br><br>2. Platz<p class="kpmg-bottom-box-title">Chuck Norris</p></td></tr></table></div>';
   $output .=  '<div id="kpmg-bottom-box-right-under"></div>';
    $output .= '<div class="kpmg_highscore_link"><a href="'.$base_url.'/quiz/highscore" rel="lightframe[|width:710;height:550;]">Mehr anzeigen...</a></div>';
   $output .= '</div>';
   $output .= '</div>';*/
   $output .= '</div>';
   $output .=   '</div>';
  return $output;
}
function _studi_kpmg_mail_saved(){
 drupal_add_css(drupal_get_path('module', 'studi_kpmg') . '/studi_kpmg.css');
  $output = '';
  $output .=   '<div id="kpmg-front-container">';
  $output .=   '<div id="kpmg-front-container-pic">';
  $output .= '</div>';
  $output .= '<div id="kpmg-front-listing">';
  $output .= '<div> Vielen Dank f&uuml;r das Eintragen deiner Adresse! Wir melden uns wieder, wenn das KPMG Wissensquiz losgeht</div>';
  $output .= '</div>';
   $output .=   '</div>';
  return $output;
}
	

function _studi_kpmg_game(){
	global $base_url, $user;
    drupal_add_css(drupal_get_path('module', 'studi_kpmg') . '/studi_kpmg.css');
	if($user->uid == 0){
	drupal_goto($path = 'user', $query = drupal_get_destination());
	}
	else{
		 if(studi_kpmg_check_uni($user->uid)){
	          $set_title = 'Wissenquiz KPMG | Studizone - Benefits for Students';
 		      $output = '';
			  $output .= '<div id="kpmg-front">';
			 
			  // Render a random video of a company
			  $output .=   '<div id="kpmg-front-container">';
			  $output .=   '<div id="kpmg-front-container-pic-second">';
              $output .= '</div>';
			  $output .=   '<iframe id ="kpmg-frame" scrolling="auto" src="http://studizone.quiz21.de/tv-quiz.php" frameborder="0"></iframe>';
			  $output .=   '</div>';
			  $output .= '</div>';
              

   		 }
         else{ $set_title = 'Wissenquiz KPMG | Studizone - Benefits for Students';
 		      $output = '';
			  $output .= '<div id="kpmg-front">';
			 
			  // Render a random video of a company
			  $output .=   '<div id="kpmg-front-container">';
			  $output .=   '<div id="kpmg-front-container-pic-second">';
              $output .= '</div>';
			  $output .= '<div id="kpmg-front-listing">';
			  $output .= '<br><h3>Verrate uns f&uuml;r welche Hochschule du antreten willst!</h3>';
			  $output .= drupal_get_form('studi_kpmg_uni_form');
			  $output .=   '</div>';
			  $output .=   '</div>';
			  $output .= '</div>';
			 
			
		
	     }
		 return $output;
	}
}
function studi_kpmg_front_form(){
	$form['teaser'] = array(
						  	'#type' => 'fieldset',
						    '#title' => t('E-Mail'),
							 '#collapsible' => FALSE,
  							'#collapsed' => FALSE,
							);
	$form['teaser']['input'] = array(
						  	'#type' => 'textfield',
							'#title' => 'Deine Mail Adresse',
						    '#description' => 'Deine Angabe wird ausschliesslich f&uuml;r das KPMG Wissenquiz verwendet.',
							);
	
	 $form['teaser']['submit'] = array(
							'#type' => 'submit',
							'#value' =>  t('Absenden'),
						     );
	 return $form;
}
function studi_kpmg_front_form_validate($form, &$form_state){
	$mail = $form_state['values']['input'];
	if (!valid_email_address($mail)) {
  form_set_error('submitted][input', t('Bitte gib eine g&uuml;ltige Email an.'));
}
}
function studi_kpmg_front_form_submit($form, &$form_state){
	$mail = $form_state['values']['input'];
	db_query("Insert INTO {studi_kpmg_mail} (mid,mail) VALUES (%d, '%s')", $id,$mail);
	drupal_goto('quiz/saved');
	
}


function studi_kpmg_uni_form(){
	$form['kategorie'] = array(
						  	'#type' => 'fieldset',
						    '#title' => t('Hochschule'),
							 '#collapsible' => FALSE,
  							'#collapsed' => FALSE,
							);
							   
	$form['cat_options'] = array(
							  '#type' => 'value',
							  '#value' => array('1'=>t('FHNW'), '2'=>t('BFH'), '3'=>t('ZHAW'), '4'=>t('ZhdK'), '5'=>t('HSLU'), '6'=>t('ZFH'), '7'=>t('SUPSI'), '8'=>t('Kalaidos'), '9'=>t('Fachhochschule Les Roches-Gruy&egrave;re'), '10'=>t('Fernfachhochschule Schweiz'), '11'=>t('HEP BEJUNE'), '12'=>t('HEP-VD'), '13'=>t('PH Bern'), '14'=>t('PHFR'), '15'=>t('HfH'), '16'=>t('PHGR'), '17'=>t('PHSG'), '18'=>t('PHSH'), '19'=>t('PHTG'), '20'=>t('PH-VS'), '21'=>t('PHZ'), '22'=>t('SHLR'), '23'=>t('ETHZ'), '24'=>t('EPFL'), '25'=>t('Universit&auml;t Basel'), '26'=>t('Universit&auml;t Bern'), '27'=>t('Universit&eacute; de G&eacute;n&egrave;ve'), '28'=>t('Universit&eacute; de Fribourg'), '29'=>t('Universit&eacute; de Lausanne'), '30'=>t('Universit&auml;t Luzern'), '31'=>t('Universit&auml;t Sankt Gallen'), '32'=>t('HTW Chur'), '33'=>t('Universit&auml;t Z&uuml;rich'), '34'=>t('ZAG'), '35'=>t('HWZ'), '36'=>t('HSO'), '37'=>t('SSTH')), 
							  );
	 $form['kategorie']['pos'] = array(
							   
							  '#type' => 'select',
							  '#description' => '<br>'.t('Bitte w&auml;hle deine Hochschule aus.'),
							  '#options' => $form['cat_options']['#value'],
							  
			);
	 $form['kategorie']['showthem'] = array(
							'#type' => 'submit',
							'#value' =>  t('Speichern'),
						     );
	 return $form;
}

function studi_kpmg_uni_form_submit($form, &$form_state){
	global $user;
    $uni = $form_state['values']['pos'];
	db_query("INSERT INTO {studi_kpmg_player} (uid,uni) VALUES (%d, '%s')", $user->uid, $uni);
	drupal_goto('quiz/game');
}
function _studi_kpmg_highscore(){
	global $base_url, $user;
    drupal_add_css(drupal_get_path('module', 'studi_kpmg') . '/studi_kpmg_highscore.css');
	$output = '';
	$output .= '<div id="main-wrapper">';
	$output .= '<div id="kpmg_high_title">';
	$output .= 'Rangliste';
	$output .= '</div>';
$output .= '<div id="kpmg-bottom-box">';
   $output .= '<div id="kpmg-bottom-box-left">';
   $output .= '<div class="kpmg-bottom-title"> Hochschulen</div>';
   $output .=   '<div class="kpmg-bottom-crown"><br><br><div>1. Platz</div><div class="kpmg-bottom-box-title-felf"> Uni St.Gallen</div><table><tr><td><br><br><br><br><p class="kpmg-bottom-box-title">Frank the Tank</p>2020</td><td><p class="kpmg-bottom-box-title">Sunny Balboa</p>2080<td><td><br><br><br><p class="kpmg-bottom-box-title">Chuck Norris</p>2050</td></tr></table></div>';
   $output .=   '<div id="kpmg-bottom-box-left-under"></div>';
   $output .= '</div>';
   $output .= '<div id="kpmg-bottom-box-right">';
   $output .= '<div class="kpmg-bottom-title">Spieler</div>';
   $output .=   '<div class="kpmg-bottom-crown"><br><table><tr><td><br><br><br><br><br><p class="kpmg-bottom-box-title">Frank the Tank</p>2020</td><td><br><br><p class="kpmg-bottom-box-title">Sunny Balboa</p>2080<td><td><br><br><br><br><p class="kpmg-bottom-box-title">Chuck Norris</p>2050</td></tr></table></div>';
   $output .=  '<div id="kpmg-bottom-box-right-under"></div>';
   $output .= '</div>';
   $output .= '</div>';
   $output .= '<div id="kpmg-bottom-final">';
$output .= '</div>';
	$output .= '</div>';

	return $output;
}

function  _studi_kpmg_highscore_infos(){
	  drupal_add_css(drupal_get_path('module', 'studi_kpmg') . '/studi_kpmg_highscore.css');
	  $output = '';
	$output .= '<div id="main-wrapper">';
	$output .= '<div id="kpmg_high_title">';
	$output .= 'Aufw&auml;rmphase';
	$output .= '</div>';
	$output .= '<div id="kpmg-bottom-box">';
	$output .= '<div id="kpmg-bottom-info"> Momentan befinden wir uns in der Warm-Up Phase. Hierbei kannst du vom 7.-9. M&auml;rz t&auml;glich mitspielen und dein Wissen testen. Deine erspielten Punkte werden jedoch nach dieser Phase wieder zur&uuml;ckgesetzt und das Sammeln beginnt ab dem 19. M&auml;rz von vorne.';
	$output .= '</div>';
    $output .= '</div>';
	return $output;
}

