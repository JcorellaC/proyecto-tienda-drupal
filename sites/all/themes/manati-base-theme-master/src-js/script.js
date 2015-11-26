// Manatí Base Theme JS functions
$(document).ready(function(){

  (function($) {

    $('#header_icon').click(function(e){
      e.preventDefault();
      $('#menu').removeClass('with--sidebar');
      $('#header_icon').toggleClass('with--sidebar');
      $('#header_icon').removeClass('header_icon');
    });

    $('#close').click(function(e){
      $('#menu').toggleClass('with--sidebar');
      $('#header_icon').removeClass('with--sidebar');
      $('#header_icon').toggleClass('header_icon');
    });

  })(jQuery);

});
