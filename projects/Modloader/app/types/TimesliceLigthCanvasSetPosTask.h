#pragma once
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask.h>
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceLigthCanvasSetPosTask {
        inline app::TimesliceLigthCanvasSetPosTask__Class** type_info() {
            static app::TimesliceLigthCanvasSetPosTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceLigthCanvasSetPosTask__Class**)(modloader::win::memory::resolve_rva(0x04789F18));
            }
            return cache;
        }
        inline app::TimesliceLigthCanvasSetPosTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceLigthCanvasSetPosTask__Class>(type_info(), "", "TimesliceLigthCanvasSetPosTask");
        }
        inline app::TimesliceLigthCanvasSetPosTask* create() {
            return il2cpp::create_object<app::TimesliceLigthCanvasSetPosTask>(get_class());
        }
    } // namespace TimesliceLigthCanvasSetPosTask
} // namespace app::classes::types
