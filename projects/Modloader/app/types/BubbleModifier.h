#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BubbleModifier__Class.h>
#include <Modloader/app/structs/BubbleModifier.h>

namespace app::classes::types {
    namespace BubbleModifier {
        namespace {
            inline app::BubbleModifier__Class* type_info_ref = nullptr;
        }
        inline app::BubbleModifier__Class** type_info = &type_info_ref;
        inline app::BubbleModifier__Class* get_class() {
            return il2cpp::get_class<app::BubbleModifier__Class>(type_info, "", "BubbleModifier");
        }
        inline app::BubbleModifier* create() {
            return il2cpp::create_object<app::BubbleModifier>(get_class());
        }
    } // namespace BubbleModifier
} // namespace app::classes::types
