#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceLigthCanvasSetPosTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceLigthCanvasSetPosTask__Class** type_info;
        inline app::TimesliceLigthCanvasSetPosTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceLigthCanvasSetPosTask__Class>(type_info, "", "TimesliceLigthCanvasSetPosTask");
        }
        inline app::TimesliceLigthCanvasSetPosTask* create() {
            return il2cpp::create_object<app::TimesliceLigthCanvasSetPosTask>(get_class());
        }
    } // namespace TimesliceLigthCanvasSetPosTask
} // namespace app::classes::types
