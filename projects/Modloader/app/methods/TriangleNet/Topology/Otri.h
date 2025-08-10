#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Osub.h>
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/Otri__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SubSegment.h>
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/Vertex.h>

namespace app::classes::TriangleNet::Topology::Otri {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Triangle*, get_Triangle, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_Triangle, app::Otri__Boxed* this_ptr, app::Triangle* value)
    IL2CPP_REGISTER_METHOD(0x0021F6B0, app::String*, ToString, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F7B0, void, Sym_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F7C0, void, Sym_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F7D0, void, Lnext_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F7E0, void, Lnext_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F7F0, void, Lprev_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F800, void, Lprev_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F810, void, Onext_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F820, void, Onext_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F830, void, Oprev_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F840, void, Oprev_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F850, void, Dnext_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F860, void, Dnext_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F870, void, Dprev_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F880, void, Dprev_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F890, void, Rnext_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F8A0, void, Rnext_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F8B0, void, Rprev_1, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F8C0, void, Rprev_2, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F8D0, app::Vertex*, Org, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F8E0, app::Vertex*, Dest, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F440, app::Vertex*, Apex, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F8F0, void, Copy, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F620, bool, Equals, app::Otri__Boxed* this_ptr, app::Otri ot)
    IL2CPP_REGISTER_METHOD(0x0021F900, void, SetOrg, app::Otri__Boxed* this_ptr, app::Vertex* v)
    IL2CPP_REGISTER_METHOD(0x0021F910, void, SetDest, app::Otri__Boxed* this_ptr, app::Vertex* v)
    IL2CPP_REGISTER_METHOD(0x0021F4E0, void, SetApex, app::Otri__Boxed* this_ptr, app::Vertex* v)
    IL2CPP_REGISTER_METHOD(0x0021F920, void, Bond, app::Otri__Boxed* this_ptr, app::Otri* ot)
    IL2CPP_REGISTER_METHOD(0x0021F930, void, Dissolve, app::Otri__Boxed* this_ptr, app::Triangle* dummy)
    IL2CPP_REGISTER_METHOD(0x0021F940, void, Infect, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F960, void, Uninfect, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F980, bool, IsInfected, app::Otri__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021F320, void, Pivot, app::Otri__Boxed* this_ptr, app::Osub* os)
    IL2CPP_REGISTER_METHOD(0x0021F9A0, void, SegBond, app::Otri__Boxed* this_ptr, app::Osub* os)
    IL2CPP_REGISTER_METHOD(0x0021F640, void, SegDissolve, app::Otri__Boxed* this_ptr, app::SubSegment* dummy)
    IL2CPP_REGISTER_METHOD(0x02AA2860, bool, IsDead, app::Triangle* tria)
    IL2CPP_REGISTER_METHOD(0x02AA4980, void, Kill, app::Triangle* tri)
    IL2CPP_REGISTER_METHOD(0x02AA49F0, void, cctor, )
} // namespace app::classes::TriangleNet::Topology::Otri
