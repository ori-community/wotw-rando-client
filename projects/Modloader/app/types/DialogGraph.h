#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DialogGraph__Class.h>
#include <Modloader/app/structs/DialogGraph.h>

namespace app::classes::types {
    namespace DialogGraph {
        namespace {
            inline app::DialogGraph__Class* type_info_ref = nullptr;
        }
        inline app::DialogGraph__Class** type_info = &type_info_ref;
        inline app::DialogGraph__Class* get_class() {
            return il2cpp::get_class<app::DialogGraph__Class>(type_info, "", "DialogGraph");
        }
        inline app::DialogGraph* create() {
            return il2cpp::create_object<app::DialogGraph>(get_class());
        }
    } // namespace DialogGraph
} // namespace app::classes::types
