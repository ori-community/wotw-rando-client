#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegionIterator_c.h>
#include <Modloader/app/structs/SubSegment.h>

namespace app::classes::TriangleNet::Meshing::Iterators::RegionIterator___c {
    IL2CPP_REGISTER_METHOD(0x02B11D30, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RegionIterator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B11E70, bool, _Process_b__3_0, app::RegionIterator_c* this_ptr, app::SubSegment* seg)
} // namespace app::classes::TriangleNet::Meshing::Iterators::RegionIterator___c
