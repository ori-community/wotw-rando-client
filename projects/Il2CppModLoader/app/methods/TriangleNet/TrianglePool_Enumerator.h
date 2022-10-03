#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::TrianglePool_Enumerator {
    IL2CPP_REGISTER_METHOD(0x02AA7420, void, ctor, (app::TrianglePool_Enumerator * this_ptr, app::TrianglePool* pool))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Triangle*, get_Current, (app::TrianglePool_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::TrianglePool_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, IEnumerator_get_Current, (app::TrianglePool_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7470, bool, MoveNext, (app::TrianglePool_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7530, void, Reset, (app::TrianglePool_Enumerator * this_ptr))
} // namespace app::classes::TriangleNet::TrianglePool_Enumerator
