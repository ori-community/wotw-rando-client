#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalThread__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalThread__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalThread__Fields_DEFINED)
#include <Modloader/app/structs/ThreadState__Enum.h>
#if defined(IL2CPP_STRUCT_ThreadState__Enum_DEFINED)
#define IL2CPP_STRUCT_InternalThread__Fields_DEFINED
struct Object;
struct Byte__Array;
struct __declspec(align(8)) InternalThread__Fields {
    int32_t lock_thread_id;
    void* handle;
    void* native_handle;
    void* unused3;
    void* name;
    int32_t name_len;
    ThreadState__Enum state;

    struct Object* abort_exc;
    int32_t abort_state_handle;
    int64_t thread_id;
    void* debugger_thread;
    void* static_data;
    void* runtime_thread_info;
    struct Object* current_appcontext;
    struct Object* root_domain_thread;
    struct Byte__Array* _serialized_principal;
    int32_t _serialized_principal_version;
    void* appdomain_refs;
    int32_t interruption_requested;
    void* synch_cs;
    bool threadpool_thread;
    bool thread_interrupt_requested;
    int32_t stack_size;
    uint8_t apartment_state;
    int32_t critical_region_level;
    int32_t managed_id;
    int32_t small_id;
    void* manage_callback;
    void* unused4;
    void* flags;
    void* thread_pinning_ref;
    void* abort_protected_block_count;
    int32_t priority;
    void* owned_mutex;
    void* suspended_event;
    int32_t self_suspended;
    void* unused1;
    void* unused2;
    void* last;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalThread__Fields_FWDDECL)
#define IL2CPP_STRUCT_InternalThread__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_InternalThread__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalThread__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InternalThread__Fields_FWDDECL)
#include <Modloader/app/structs/InternalThread__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalThread__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
