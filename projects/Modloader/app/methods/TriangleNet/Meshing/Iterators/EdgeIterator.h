#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::Iterators::EdgeIterator {
    IL2CPP_REGISTER_METHOD(0x02B10CF0, void, ctor, (app::EdgeIterator * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Edge*, get_Current, (app::EdgeIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B10DD0, void, Dispose, (app::EdgeIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Object*, IEnumerator_get_Current, (app::EdgeIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B10E60, bool, MoveNext, (app::EdgeIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B110F0, void, Reset, (app::EdgeIterator * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::Iterators::EdgeIterator
