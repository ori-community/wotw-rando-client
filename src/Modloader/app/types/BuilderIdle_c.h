#pragma once
#include <Modloader/app/structs/BuilderIdle_c.h>
#include <Modloader/app/structs/BuilderIdle_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderIdle_c {
        inline app::BuilderIdle_c__Class** type_info() {
            static app::BuilderIdle_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderIdle_c__Class**)(modloader::win::memory::resolve_rva(0x04792FD0));
            }
            return cache;
        }
        inline app::BuilderIdle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderIdle_c__Class>(type_info(), "", "BuilderIdle", "<>c");
        }
        inline app::BuilderIdle_c* create() {
            return il2cpp::create_object<app::BuilderIdle_c>(get_class());
        }
    } // namespace BuilderIdle_c
} // namespace app::classes::types
