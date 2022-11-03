#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_CreatorPropertyContext {
        inline app::JsonSerializerInternalReader_CreatorPropertyContext__Class** type_info = (app::JsonSerializerInternalReader_CreatorPropertyContext__Class**)(modloader::win::memory::resolve_rva(0x0478F478));
        inline app::JsonSerializerInternalReader_CreatorPropertyContext__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_CreatorPropertyContext__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "CreatorPropertyContext");
        }
        inline app::JsonSerializerInternalReader_CreatorPropertyContext* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_CreatorPropertyContext>(get_class());
        }
        inline app::JsonSerializerInternalReader_CreatorPropertyContext__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_CreatorPropertyContext__Array>(get_class(), size);
        }
        inline app::JsonSerializerInternalReader_CreatorPropertyContext__Array* create_array(const std::vector<app::JsonSerializerInternalReader_CreatorPropertyContext*>& items) {
            return il2cpp::array_new<app::JsonSerializerInternalReader_CreatorPropertyContext__Array>(get_class(), items);
        }
    } // namespace JsonSerializerInternalReader_CreatorPropertyContext
} // namespace app::classes::types
