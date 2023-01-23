#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrounderDemo__Class.h>
#include <Modloader/app/structs/GrounderDemo.h>

namespace app::classes::types {
    namespace GrounderDemo {
        namespace {
            inline app::GrounderDemo__Class* type_info_ref = nullptr;
        }
        inline app::GrounderDemo__Class** type_info = &type_info_ref;
        inline app::GrounderDemo__Class* get_class() {
            return il2cpp::get_class<app::GrounderDemo__Class>(type_info, "RootMotion.Demos", "GrounderDemo");
        }
        inline app::GrounderDemo* create() {
            return il2cpp::create_object<app::GrounderDemo>(get_class());
        }
    } // namespace GrounderDemo
} // namespace app::classes::types
