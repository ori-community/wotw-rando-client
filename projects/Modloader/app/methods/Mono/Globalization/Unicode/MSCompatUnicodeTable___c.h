#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MSCompatUnicodeTable_c.h>
#include <Modloader/app/structs/Level2Map.h>

namespace app::classes::Mono::Globalization::Unicode::MSCompatUnicodeTable___c {
    IL2CPP_REGISTER_METHOD(0x023BCC10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MSCompatUnicodeTable_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023BCD50, int32_t, _BuildTailoringTables_b__17_0, (app::MSCompatUnicodeTable_c * this_ptr, app::Level2Map* a, app::Level2Map* b))
} // namespace app::classes::Mono::Globalization::Unicode::MSCompatUnicodeTable___c
