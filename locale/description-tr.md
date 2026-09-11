# Graphics API Replacer

**Yazarlar**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

Bu modül, eski DirectDraw görüntüleme sistemini DirectX veya OpenGL kullanan daha modern bir sistemle değiştirir. Pencere oluşturmayı, kullanılan az sayıdaki DirectDraw çağrısını ve belirli girdi işlevlerini kontrol eder. Temelde DirectDraw gibi davranır ve Crusader’ın yazılımsal olarak çizdiği kareler için bellek sağlar. Sonuç daha sonra bir doku olarak DirectX 11 veya OpenGL ile gösterilir. Fare girdileri değişen görüntüye uyarlanır.

Destek şu anda yalnızca Crusader 1.41 ve Crusader Extreme 1.41.1-E’nin Batı sürümleri için garanti edilir. Diğer Doğu 1.41 sürümleri çalışabilir. HD öncesi sürümler (1.3?) kesinlikle **ÇALIŞMAZ**.

### Seçenekler

Seçenekler yapılandırma sekmesinde ayrıntılı açıklanmıştır. Genel kurallar:

- Oyun içi çözünürlük yalnızca oluşturma çözünürlüğünü belirler. Pencere çözünürlüğü modül seçeneklerinden ayarlanır.
- Oyunun en-boy oranı korunur. Penceredeki boş alanlar siyah kalır ve gösterilen görüntünün parçası oldukları için kayıtlarda da görünür.
- Farenin üç ana düğmesinden biri basılı tutulurken imleç pencerenin oyun alanıyla sınırlanır.
- Seçenekleri değiştirmek için oyunu yeniden başlatmak gerekir.

### Geri bildirim

Modülle ilgili sorun veya öneriler için GitHub’da bir issue açabilirsiniz.
