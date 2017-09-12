/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.tunegareceiver.ExampleProxy.h"
#include "ti.tunegareceiver.TiTuneGAReceiverModule.h"


#line 14 "/private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 11, duplicates = 0 */

class TiTuneGAReceiverBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiTuneGAReceiverBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TiTuneGAReceiverBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 30,
      MAX_WORD_LENGTH = 40,
      MIN_HASH_VALUE = 30,
      MAX_HASH_VALUE = 40
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 16 "/private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf"
      {"ti.tunegareceiver.ExampleProxy", ::ti::tunegareceiver::titunegareceiver::ExampleProxy::bindProxy, ::ti::tunegareceiver::titunegareceiver::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf"
      {"ti.tunegareceiver.TiTuneGAReceiverModule", ::ti::tunegareceiver::TiTuneGAReceiverModule::bindProxy, ::ti::tunegareceiver::TiTuneGAReceiverModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/_5/gsv_1zgx2172943qs11nm5l80000gp/T/andrea.jonus/ti.tunegareceiver-generated/KrollGeneratedBindings.gperf"

