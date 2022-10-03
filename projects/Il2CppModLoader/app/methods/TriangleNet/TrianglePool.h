#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::TrianglePool {
    IL2CPP_REGISTER_METHOD(0x02AA5EB0, void, ctor, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA60B0, app::Triangle*, Get, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA64D0, void, Release, (app::TrianglePool * this_ptr, app::Triangle* triangle))
    IL2CPP_REGISTER_METHOD(0x02AA6580, app::TrianglePool*, Restart, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA6730, app::IEnumerable_1_TriangleNet_Topology_Triangle_*, Sample, (app::TrianglePool * this_ptr, int32_t k, app::Random* random))
    IL2CPP_REGISTER_METHOD(0x02AA68E0, void, Cleanup, (app::TrianglePool * this_ptr, app::Triangle* triangle))
    IL2CPP_REGISTER_METHOD(0x02AA69B0, void, Add, (app::TrianglePool * this_ptr, app::Triangle* item))
    IL2CPP_REGISTER_METHODINFO(0x04785CD8, TrianglePool_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AA6A00, void, Clear, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA6B60, bool, Contains, (app::TrianglePool * this_ptr, app::Triangle* item))
    IL2CPP_REGISTER_METHOD(0x02AA6C10, void, CopyTo, (app::TrianglePool * this_ptr, app::Triangle__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AA6E20, int32_t, get_Count, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA6EB0, bool, Remove, (app::TrianglePool * this_ptr, app::Triangle* item))
    IL2CPP_REGISTER_METHODINFO(0x04756B18, TrianglePool_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AA6F00, app::IEnumerator_1_TriangleNet_Topology_Triangle_*, GetEnumerator, (app::TrianglePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7060, app::IEnumerator*, IEnumerable_GetEnumerator, (app::TrianglePool * this_ptr))
} // namespace app::classes::TriangleNet::TrianglePool
