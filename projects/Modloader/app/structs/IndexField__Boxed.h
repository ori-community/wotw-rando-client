#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexField__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexField__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexField__Boxed_DEFINED)
#include <Modloader/app/structs/IndexField.h>
#if defined(IL2CPP_STRUCT_IndexField_DEFINED)
#define IL2CPP_STRUCT_IndexField__Boxed_DEFINED
struct IndexField__Class;
struct IndexField__Boxed {
    struct IndexField__Class* klass;
    MonitorData* monitor;
    struct IndexField fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IndexField__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IndexField__Boxed_FWDDECL
#include <Modloader/app/structs/IndexField__Class.h>
#endif
#undef IL2CPP_STRUCT_IndexField__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexField__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IndexField__Boxed_FWDDECL)
#include <Modloader/app/structs/IndexField__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexField__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
