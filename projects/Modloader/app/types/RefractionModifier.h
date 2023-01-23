#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RefractionModifier__Class.h>
#include <Modloader/app/structs/RefractionModifier.h>

namespace app::classes::types {
    namespace RefractionModifier {
        namespace {
            inline app::RefractionModifier__Class* type_info_ref = nullptr;
        }
        inline app::RefractionModifier__Class** type_info = &type_info_ref;
        inline app::RefractionModifier__Class* get_class() {
            return il2cpp::get_class<app::RefractionModifier__Class>(type_info, "", "RefractionModifier");
        }
        inline app::RefractionModifier* create() {
            return il2cpp::create_object<app::RefractionModifier>(get_class());
        }
    } // namespace RefractionModifier
} // namespace app::classes::types
