#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayConverter_DEFINED)
#define IL2CPP_STRUCT_ArrayConverter_DEFINED
struct ArrayConverter__Class;
struct ArrayConverter {
    struct ArrayConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ArrayConverter_FWDDECL)
#define IL2CPP_STRUCT_ArrayConverter_FWDDECL
#include <Modloader/app/structs/ArrayConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayConverter_DEFINED) && !defined(IL2CPP_STRUCT_ArrayConverter_FWDDECL)
#include <Modloader/app/structs/ArrayConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
