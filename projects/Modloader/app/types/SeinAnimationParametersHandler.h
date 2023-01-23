#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAnimationParametersHandler__Class.h>
#include <Modloader/app/structs/SeinAnimationParametersHandler.h>

namespace app::classes::types {
    namespace SeinAnimationParametersHandler {
        namespace {
            inline app::SeinAnimationParametersHandler__Class* type_info_ref = nullptr;
        }
        inline app::SeinAnimationParametersHandler__Class** type_info = &type_info_ref;
        inline app::SeinAnimationParametersHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationParametersHandler__Class>(type_info, "", "SeinAnimationParametersHandler");
        }
        inline app::SeinAnimationParametersHandler* create() {
            return il2cpp::create_object<app::SeinAnimationParametersHandler>(get_class());
        }
    } // namespace SeinAnimationParametersHandler
} // namespace app::classes::types
