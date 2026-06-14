#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastStretch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastStretch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastStretch_DEFINED)
#include <Modloader/app/structs/ContrastStretch__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastStretch__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastStretch_DEFINED
struct ContrastStretch__Class;
struct ContrastStretch {
    struct ContrastStretch__Class* klass;
    MonitorData* monitor;
    struct ContrastStretch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastStretch_FWDDECL)
#define IL2CPP_STRUCT_ContrastStretch_FWDDECL
#include <Modloader/app/structs/ContrastStretch__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastStretch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastStretch_DEFINED) && !defined(IL2CPP_STRUCT_ContrastStretch_FWDDECL)
#include <Modloader/app/structs/ContrastStretch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastStretch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
