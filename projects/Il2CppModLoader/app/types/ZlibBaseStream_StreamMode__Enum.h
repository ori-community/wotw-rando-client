#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZlibBaseStream_StreamMode__Enum {
        namespace {
            app::ZlibBaseStream_StreamMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ZlibBaseStream_StreamMode__Enum__Class** type_info = &type_info_ref;
        inline app::ZlibBaseStream_StreamMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ZlibBaseStream_StreamMode__Enum__Class>(type_info, "Ionic.Zlib", "ZlibBaseStream", "StreamMode");
        }
        inline app::ZlibBaseStream_StreamMode__Enum* create() {
            return il2cpp::create_object<app::ZlibBaseStream_StreamMode__Enum>(get_class());
        }
    } // namespace ZlibBaseStream_StreamMode__Enum
} // namespace app::classes::types
