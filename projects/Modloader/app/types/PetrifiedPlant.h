#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedPlant {
        namespace {
            inline app::PetrifiedPlant__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedPlant__Class** type_info = &type_info_ref;
        inline app::PetrifiedPlant__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedPlant__Class>(type_info, "", "PetrifiedPlant");
        }
        inline app::PetrifiedPlant* create() {
            return il2cpp::create_object<app::PetrifiedPlant>(get_class());
        }
    } // namespace PetrifiedPlant
} // namespace app::classes::types
