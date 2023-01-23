#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BowArrow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BowArrow_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrow_DEFINED)
#include <Modloader/app/structs/BowArrow__Fields.h>
#if defined(IL2CPP_STRUCT_BowArrow__Fields_DEFINED)
#define IL2CPP_STRUCT_BowArrow_DEFINED
struct BowArrow__Class;
struct BowArrow {
    struct BowArrow__Class* klass;
    MonitorData* monitor;
    struct BowArrow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BowArrow_FWDDECL)
#define IL2CPP_STRUCT_BowArrow_FWDDECL
#include <Modloader/app/structs/BowArrow__Class.h>
#endif
#undef IL2CPP_STRUCT_BowArrow_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrow_DEFINED) && !defined(IL2CPP_STRUCT_BowArrow_FWDDECL)
#include <Modloader/app/structs/BowArrow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BowArrow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
