#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CaptureCollection__Class.h>
#include <Modloader/app/structs/CaptureCollection.h>

namespace app::classes::types {
    namespace CaptureCollection {
        namespace {
            inline app::CaptureCollection__Class* type_info_ref = nullptr;
        }
        inline app::CaptureCollection__Class** type_info = &type_info_ref;
        inline app::CaptureCollection__Class* get_class() {
            return il2cpp::get_class<app::CaptureCollection__Class>(type_info, "System.Text.RegularExpressions", "CaptureCollection");
        }
        inline app::CaptureCollection* create() {
            return il2cpp::create_object<app::CaptureCollection>(get_class());
        }
    } // namespace CaptureCollection
} // namespace app::classes::types
