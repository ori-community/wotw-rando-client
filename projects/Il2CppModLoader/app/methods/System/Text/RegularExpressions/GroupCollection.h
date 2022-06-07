#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::GroupCollection {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_1, (app::GroupCollection * this_ptr, app::Match * match, app::Hashtable * caps))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_SyncRoot, (app::GroupCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::GroupCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581720, int32_t, get_Count, (app::GroupCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581750, app::Group *, get_Item_1, (app::GroupCollection * this_ptr, int32_t groupnum))
    IL2CPP_REGISTER_METHOD(0x02581760, app::Group *, get_Item_2, (app::GroupCollection * this_ptr, app::String * groupname))
    IL2CPP_REGISTER_METHOD(0x02581990, app::Group *, GetGroup, (app::GroupCollection * this_ptr, int32_t groupnum))
    IL2CPP_REGISTER_METHOD(0x02581B10, app::Group *, GetGroupImpl, (app::GroupCollection * this_ptr, int32_t groupnum))
    IL2CPP_REGISTER_METHOD(0x02581F90, void, CopyTo, (app::GroupCollection * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x04792CA0, GroupCollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025820B0, app::IEnumerator *, GetEnumerator, (app::GroupCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02582200, void, ctor_2, (app::GroupCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DB78, GroupCollection__ctor_1__MethodInfo)
}
