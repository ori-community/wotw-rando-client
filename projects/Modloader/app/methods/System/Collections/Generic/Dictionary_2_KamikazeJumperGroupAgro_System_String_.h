#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_KamikazeJumperGroupAgro_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_KamikazeJumperGroupAgro_System_String_.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_KamikazeJumperGroupAgro_System_String_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_KamikazeJumperGroupAgro_System_String_* this_ptr,
        app::KamikazeJumperGroupAgro* key,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_KamikazeJumperGroupAgro_System_String_* this_ptr, app::KamikazeJumperGroupAgro* key)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_KamikazeJumperGroupAgro_System_String_,
        GetEnumerator,
        app::Dictionary_2_KamikazeJumperGroupAgro_System_String_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_KamikazeJumperGroupAgro_System_String_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_KamikazeJumperGroupAgro_System_String_
