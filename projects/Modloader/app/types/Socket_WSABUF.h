#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Socket_WSABUF {
        namespace {
            inline app::Socket_WSABUF__Class* type_info_ref = nullptr;
        }
        inline app::Socket_WSABUF__Class** type_info = &type_info_ref;
        inline app::Socket_WSABUF__Class* get_class() {
            return il2cpp::get_nested_class<app::Socket_WSABUF__Class>(type_info, "System.Net.Sockets", "Socket", "WSABUF");
        }
        inline app::Socket_WSABUF* create() {
            return il2cpp::create_object<app::Socket_WSABUF>(get_class());
        }
        inline app::Socket_WSABUF__Boxed* box(app::Socket_WSABUF value) {
            return il2cpp::box_value<app::Socket_WSABUF__Boxed>(get_class(), value);
        }
        inline app::Socket_WSABUF__Array* create_array(int size) {
            return il2cpp::array_new<app::Socket_WSABUF__Array>(get_class(), size);
        }
        inline app::Socket_WSABUF__Array* create_array(const std::vector<app::Socket_WSABUF>& items) {
            return il2cpp::array_new<app::Socket_WSABUF__Array>(get_class(), items);
        }
    } // namespace Socket_WSABUF
} // namespace app::classes::types
