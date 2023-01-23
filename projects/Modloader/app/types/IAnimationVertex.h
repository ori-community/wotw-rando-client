#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAnimationVertex__Class.h>

namespace app::classes::types {
    namespace IAnimationVertex {
        namespace {
            inline app::IAnimationVertex__Class* type_info_ref = nullptr;
        }
        inline app::IAnimationVertex__Class** type_info = &type_info_ref;
        inline app::IAnimationVertex__Class* get_class() {
            return il2cpp::get_class<app::IAnimationVertex__Class>(type_info, "", "IAnimationVertex");
        }
    } // namespace IAnimationVertex
} // namespace app::classes::types
