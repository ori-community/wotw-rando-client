#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortKeyBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortKeyBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKeyBuffer_DEFINED)
#include <Modloader/app/structs/SortKeyBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_SortKeyBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_SortKeyBuffer_DEFINED
struct SortKeyBuffer__Class;
struct SortKeyBuffer {
    struct SortKeyBuffer__Class* klass;
    MonitorData* monitor;
    struct SortKeyBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortKeyBuffer_FWDDECL)
#define IL2CPP_STRUCT_SortKeyBuffer_FWDDECL
#include <Modloader/app/structs/SortKeyBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_SortKeyBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKeyBuffer_DEFINED) && !defined(IL2CPP_STRUCT_SortKeyBuffer_FWDDECL)
#include <Modloader/app/structs/SortKeyBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortKeyBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
