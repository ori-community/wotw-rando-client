#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::ArrayList_ArrayListEnumeratorSimple {
    IL2CPP_REGISTER_METHOD(0x0201A310, void, ctor, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr, app::ArrayList * list))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object *, Clone, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201A440, bool, MoveNext, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784700, ArrayList_ArrayListEnumeratorSimple_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201A6C0, app::Object *, get_Current, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707C40, ArrayList_ArrayListEnumeratorSimple_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201A800, void, Reset, (app::ArrayList_ArrayListEnumeratorSimple * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047754E0, ArrayList_ArrayListEnumeratorSimple_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201A920, void, cctor, ())
}
