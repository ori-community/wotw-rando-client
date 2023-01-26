#pragma once
#include <Modloader/app/structs/ZlibBaseStream_StreamMode__Enum.h>
#include <Modloader/app/structs/ZlibBaseStream_StreamMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZlibBaseStream_StreamMode__Enum {
        inline app::ZlibBaseStream_StreamMode__Enum__Class** type_info() {
            static app::ZlibBaseStream_StreamMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZlibBaseStream_StreamMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZlibBaseStream_StreamMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ZlibBaseStream_StreamMode__Enum__Class>(type_info(), "Ionic.Zlib", "ZlibBaseStream", "StreamMode");
        }
        inline app::ZlibBaseStream_StreamMode__Enum* create() {
            return il2cpp::create_object<app::ZlibBaseStream_StreamMode__Enum>(get_class());
        }
    } // namespace ZlibBaseStream_StreamMode__Enum
} // namespace app::classes::types
