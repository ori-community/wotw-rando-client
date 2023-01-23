#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PixelMatrix__Class.h>
#include <Modloader/app/structs/PixelMatrix.h>

namespace app::classes::types {
    namespace PixelMatrix {
        namespace {
            inline app::PixelMatrix__Class* type_info_ref = nullptr;
        }
        inline app::PixelMatrix__Class** type_info = &type_info_ref;
        inline app::PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::PixelMatrix__Class>(type_info, "Colorful", "PixelMatrix");
        }
        inline app::PixelMatrix* create() {
            return il2cpp::create_object<app::PixelMatrix>(get_class());
        }
    } // namespace PixelMatrix
} // namespace app::classes::types
