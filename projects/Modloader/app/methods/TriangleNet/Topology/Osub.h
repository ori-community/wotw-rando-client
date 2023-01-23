#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SubSegment.h>
#include <Modloader/app/structs/Osub__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Osub.h>
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/Vertex.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::TriangleNet::Topology::Osub {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::SubSegment*, get_Segment, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F190, app::String*, ToString, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F290, void, Sym_1, (app::Osub__Boxed * this_ptr, app::Osub* os))
    IL2CPP_REGISTER_METHOD(0x0021F2B0, void, Sym_2, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F2C0, void, Pivot_1, (app::Osub__Boxed * this_ptr, app::Osub* os))
    IL2CPP_REGISTER_METHOD(0x0021F320, void, Pivot_2, (app::Osub__Boxed * this_ptr, app::Otri* ot))
    IL2CPP_REGISTER_METHOD(0x0021F380, void, Next_1, (app::Osub__Boxed * this_ptr, app::Osub* ot))
    IL2CPP_REGISTER_METHOD(0x0021F3E0, void, Next_2, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F440, app::Vertex*, Org, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F490, app::Vertex*, Dest, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F4E0, void, SetOrg, (app::Osub__Boxed * this_ptr, app::Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x0021F4F0, void, SetDest, (app::Osub__Boxed * this_ptr, app::Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x0021F500, app::Vertex*, SegOrg, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F550, app::Vertex*, SegDest, (app::Osub__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021F5A0, void, SetSegOrg, (app::Osub__Boxed * this_ptr, app::Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x0021F5B0, void, SetSegDest, (app::Osub__Boxed * this_ptr, app::Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x0021F5C0, void, Bond, (app::Osub__Boxed * this_ptr, app::Osub* os))
    IL2CPP_REGISTER_METHOD(0x0021F5D0, void, Dissolve, (app::Osub__Boxed * this_ptr, app::SubSegment* dummy))
    IL2CPP_REGISTER_METHOD(0x0021F620, bool, Equal, (app::Osub__Boxed * this_ptr, app::Osub os))
    IL2CPP_REGISTER_METHOD(0x0021F640, void, TriDissolve, (app::Osub__Boxed * this_ptr, app::Triangle* dummy))
    IL2CPP_REGISTER_METHOD(0x02AA2860, bool, IsDead, (app::SubSegment * sub))
    IL2CPP_REGISTER_METHOD(0x02AA28B0, void, Kill, (app::SubSegment * sub))
} // namespace app::classes::TriangleNet::Topology::Osub
