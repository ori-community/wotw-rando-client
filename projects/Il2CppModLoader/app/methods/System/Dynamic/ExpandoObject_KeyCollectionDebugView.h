#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject_KeyCollectionDebugView {
    IL2CPP_REGISTER_METHOD(0x01F90890, void, ctor, (app::ExpandoObject_KeyCollectionDebugView * this_ptr, app::ICollection_1_System_String_ * collection))
    IL2CPP_REGISTER_METHOD(0x01F90930, app::String__Array *, get_Items, (app::ExpandoObject_KeyCollectionDebugView * this_ptr))
}
