#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Hashtable_HashtableDebugView {
    IL2CPP_REGISTER_METHOD(0x02026FE0, void, ctor, (app::Hashtable_HashtableDebugView * this_ptr, app::Hashtable * hashtable))
    IL2CPP_REGISTER_METHODINFO(0x04750650, Hashtable_HashtableDebugView__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017173C0, app::KeyValuePairs__Array *, get_Items, (app::Hashtable_HashtableDebugView * this_ptr))
}
