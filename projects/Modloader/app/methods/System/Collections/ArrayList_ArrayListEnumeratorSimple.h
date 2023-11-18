#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList_ArrayListEnumeratorSimple.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::ArrayList_ArrayListEnumeratorSimple {
    IL2CPP_REGISTER_METHOD(0x0201A310, void, ctor, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr, app::ArrayList* list))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201A440, bool, MoveNext, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201A6C0, app::Object*, get_Current, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201A800, void, Reset, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201A920, void, cctor, ())
} // namespace app::classes::System::Collections::ArrayList_ArrayListEnumeratorSimple
