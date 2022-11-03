#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceLigthCanvasSetPosTask {
        inline app::TimesliceLigthCanvasSetPosTask__Class** type_info = (app::TimesliceLigthCanvasSetPosTask__Class**)(modloader::win::memory::resolve_rva(0x04789F18));
        inline app::TimesliceLigthCanvasSetPosTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceLigthCanvasSetPosTask__Class>(type_info, "", "TimesliceLigthCanvasSetPosTask");
        }
        inline app::TimesliceLigthCanvasSetPosTask* create() {
            return il2cpp::create_object<app::TimesliceLigthCanvasSetPosTask>(get_class());
        }
    } // namespace TimesliceLigthCanvasSetPosTask
} // namespace app::classes::types
