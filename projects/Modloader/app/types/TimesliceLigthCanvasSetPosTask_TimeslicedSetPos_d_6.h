#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class.h>
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6.h>

namespace app::classes::types {
    namespace TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6 {
        inline app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class** type_info = (app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class**)(modloader::win::memory::resolve_rva(0x047637B0));
        inline app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class>(type_info, "", "TimesliceLigthCanvasSetPosTask", "<TimeslicedSetPos>d__6");
        }
        inline app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6* create() {
            return il2cpp::create_object<app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6>(get_class());
        }
    } // namespace TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6
} // namespace app::classes::types
