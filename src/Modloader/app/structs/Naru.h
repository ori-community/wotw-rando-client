#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Naru_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Naru_INITIALIZING
#if !defined(IL2CPP_STRUCT_Naru_DEFINED)
#include <Modloader/app/structs/Naru__Fields.h>
#if defined(IL2CPP_STRUCT_Naru__Fields_DEFINED)
#define IL2CPP_STRUCT_Naru_DEFINED
struct Naru__Class;
struct Naru {
    struct Naru__Class* klass;
    MonitorData* monitor;
    struct Naru__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Naru_FWDDECL)
#define IL2CPP_STRUCT_Naru_FWDDECL
#include <Modloader/app/structs/Naru__Class.h>
#endif
#undef IL2CPP_STRUCT_Naru_INITIALIZING
#if !defined(IL2CPP_STRUCT_Naru_DEFINED) && !defined(IL2CPP_STRUCT_Naru_FWDDECL)
#include <Modloader/app/structs/Naru.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Naru.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
