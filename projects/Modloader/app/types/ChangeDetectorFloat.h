#pragma once
#include <Modloader/app/structs/ChangeDetectorFloat.h>
#include <Modloader/app/structs/ChangeDetectorFloat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeDetectorFloat {
        inline app::ChangeDetectorFloat__Class** type_info() {
            static app::ChangeDetectorFloat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChangeDetectorFloat__Class**)(modloader::win::memory::resolve_rva(0x04744858));
            }
            return cache;
        }
        inline app::ChangeDetectorFloat__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorFloat__Class>(type_info(), "", "ChangeDetectorFloat");
        }
        inline app::ChangeDetectorFloat* create() {
            return il2cpp::create_object<app::ChangeDetectorFloat>(get_class());
        }
    } // namespace ChangeDetectorFloat
} // namespace app::classes::types
