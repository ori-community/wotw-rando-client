#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinExperienceValueProvider__Class.h>
#include <Modloader/app/structs/SeinExperienceValueProvider.h>

namespace app::classes::types {
    namespace SeinExperienceValueProvider {
        namespace {
            inline app::SeinExperienceValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinExperienceValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceValueProvider__Class>(type_info, "", "SeinExperienceValueProvider");
        }
        inline app::SeinExperienceValueProvider* create() {
            return il2cpp::create_object<app::SeinExperienceValueProvider>(get_class());
        }
    } // namespace SeinExperienceValueProvider
} // namespace app::classes::types
