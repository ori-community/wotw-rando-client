#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Positions {
    IL2CPP_REGISTER_METHOD(0x016D9430, int32_t, Add, (app::Positions * this_ptr, int32_t symbol, app::Object* particle))
    IL2CPP_REGISTER_METHOD(0x016D9510, app::Position, get_Item, (app::Positions * this_ptr, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (app::Positions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9620, void, ctor, (app::Positions * this_ptr))
} // namespace app::classes::System::Xml::Schema::Positions
