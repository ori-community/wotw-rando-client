#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoDeathReaction_c__Class.h>
#include <Modloader/app/structs/SkeetoDeathReaction_c.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction_c {
        inline app::SkeetoDeathReaction_c__Class** type_info = (app::SkeetoDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04723028));
        inline app::SkeetoDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDeathReaction_c__Class>(type_info, "", "SkeetoDeathReaction", "<>c");
        }
        inline app::SkeetoDeathReaction_c* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction_c>(get_class());
        }
    } // namespace SkeetoDeathReaction_c
} // namespace app::classes::types
