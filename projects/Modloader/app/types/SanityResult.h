#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SanityResult__Class.h>
#include <Modloader/app/structs/SanityResult.h>

namespace app::classes::types {
    namespace SanityResult {
        namespace {
            inline app::SanityResult__Class* type_info_ref = nullptr;
        }
        inline app::SanityResult__Class** type_info = &type_info_ref;
        inline app::SanityResult__Class* get_class() {
            return il2cpp::get_class<app::SanityResult__Class>(type_info, "", "SanityResult");
        }
        inline app::SanityResult* create() {
            return il2cpp::create_object<app::SanityResult>(get_class());
        }
    } // namespace SanityResult
} // namespace app::classes::types
