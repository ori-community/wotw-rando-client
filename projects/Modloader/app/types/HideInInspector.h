#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HideInInspector__Class.h>
#include <Modloader/app/structs/HideInInspector.h>

namespace app::classes::types {
    namespace HideInInspector {
        namespace {
            inline app::HideInInspector__Class* type_info_ref = nullptr;
        }
        inline app::HideInInspector__Class** type_info = &type_info_ref;
        inline app::HideInInspector__Class* get_class() {
            return il2cpp::get_class<app::HideInInspector__Class>(type_info, "UnityEngine", "HideInInspector");
        }
        inline app::HideInInspector* create() {
            return il2cpp::create_object<app::HideInInspector>(get_class());
        }
    } // namespace HideInInspector
} // namespace app::classes::types
