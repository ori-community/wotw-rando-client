#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::FixupHolderList {
    IL2CPP_REGISTER_METHOD(0x01D87CC0, void, ctor_1, (app::FixupHolderList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D87D60, void, ctor_2, (app::FixupHolderList * this_ptr, int32_t starting_size))
    IL2CPP_REGISTER_METHOD(0x01D87E00, void, Add, (app::FixupHolderList * this_ptr, app::FixupHolder * fixup))
    IL2CPP_REGISTER_METHOD(0x01D87F50, void, EnlargeArray, (app::FixupHolderList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C970, FixupHolderList_EnlargeArray__MethodInfo)
}
