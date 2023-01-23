#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModifiersIgnoreList__Class.h>
#include <Modloader/app/structs/ModifiersIgnoreList.h>

namespace app::classes::types {
    namespace ModifiersIgnoreList {
        namespace {
            inline app::ModifiersIgnoreList__Class* type_info_ref = nullptr;
        }
        inline app::ModifiersIgnoreList__Class** type_info = &type_info_ref;
        inline app::ModifiersIgnoreList__Class* get_class() {
            return il2cpp::get_class<app::ModifiersIgnoreList__Class>(type_info, "Moon.ArtOptimization", "ModifiersIgnoreList");
        }
        inline app::ModifiersIgnoreList* create() {
            return il2cpp::create_object<app::ModifiersIgnoreList>(get_class());
        }
    } // namespace ModifiersIgnoreList
} // namespace app::classes::types
