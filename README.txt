Copyright (c) 2011 Picatcha -- http://picatcha.com

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

Picatcha for Drupal
====================

INSTALLATION
------------

1. Extract the Picatcha module to your local favorite
  modules directory (sites/all/modules).

2. Enable Picatcha and CAPTCHA modules in:
  admin/build/modules

For general information about module installation, visit
  Installing modules and themes
    http://drupal.org/documentation/install/modules-themes


For information about CAPTCHA, visit
    CAPTCHA
    http://drupal.org/project/captcha

CONFIGURATION
-------------

1. You'll now find a Picatcha tab in the CAPTCHA
  administration page available at:
    admin/user/captcha/picatcha

2. Register for a public/private Picatcha key pair at:
    http://picatcha.com

3. Input the keys into the Picatcha settings. The rest of
  the settings should be fine as their defaults.

4. Visit the CAPTCHA administration page and set where you
  want the Picatcha form to be presented:
    admin/user/captcha

TIP
---

You can add CAPTCHA to a form at 'Set CAPTCHA Point'
  admin/user/captcha/captcha/captcha_point

To know Form ID
1. Enable 'Add CAPTCHA administration links to forms' at General settings
  admin/user/captcha
2. Visit a page which contains the form

3. Click a link 'Place a CAPTCHA here for untrusted users.' at CAPTCHA box

4. Then 'Set CAPTCHA Point' page is shown with the form ID
