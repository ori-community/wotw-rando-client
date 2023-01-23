#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformExtensions__Class.h>
#include <Modloader/app/structs/TransformExtensions.h>

namespace app::classes::types {
    namespace TransformExtensions {
        inline app::TransformExtensions__Class** type_info = (app::TransformExtensions__Class**)(modloader::win::memory::resolve_rva(0x04767B98));
        inline app::TransformExtensions__Class* get_class() {
            return il2cpp::get_class<app::TransformExtensions__Class>(type_info, "Moon", "TransformExtensions");
        }
        inline app::TransformExtensions* create() {
            return il2cpp::create_object<app::TransformExtensions>(get_class());
        }
    } // namespace TransformExtensions
} // namespace app::classes::types
