#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair.h>
#include <Modloader/app/structs/SpikeSlugEntity_c_DisplayClass57_1.h>

namespace app::classes::SpikeSlugEntity___c__DisplayClass57_1 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpikeSlugEntity_c_DisplayClass57_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x011CCB50,
        bool,
        _set_ShellState_b__0,
        app::SpikeSlugEntity_c_DisplayClass57_1* this_ptr,
        app::SpikeSlugEntity_ShelledUnshelledAnimPair* x
    )
    IL2CPP_REGISTER_METHOD(
        0x011CCC60,
        bool,
        _set_ShellState_b__1,
        app::SpikeSlugEntity_c_DisplayClass57_1* this_ptr,
        app::SpikeSlugEntity_ShelledUnshelledAnimPair* x
    )
} // namespace app::classes::SpikeSlugEntity___c__DisplayClass57_1
