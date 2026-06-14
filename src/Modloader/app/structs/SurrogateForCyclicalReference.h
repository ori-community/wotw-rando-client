#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurrogateForCyclicalReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurrogateForCyclicalReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurrogateForCyclicalReference_DEFINED)
#include <Modloader/app/structs/SurrogateForCyclicalReference__Fields.h>
#if defined(IL2CPP_STRUCT_SurrogateForCyclicalReference__Fields_DEFINED)
#define IL2CPP_STRUCT_SurrogateForCyclicalReference_DEFINED
struct SurrogateForCyclicalReference__Class;
struct SurrogateForCyclicalReference {
    struct SurrogateForCyclicalReference__Class* klass;
    MonitorData* monitor;
    struct SurrogateForCyclicalReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurrogateForCyclicalReference_FWDDECL)
#define IL2CPP_STRUCT_SurrogateForCyclicalReference_FWDDECL
#include <Modloader/app/structs/SurrogateForCyclicalReference__Class.h>
#endif
#undef IL2CPP_STRUCT_SurrogateForCyclicalReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurrogateForCyclicalReference_DEFINED) && !defined(IL2CPP_STRUCT_SurrogateForCyclicalReference_FWDDECL)
#include <Modloader/app/structs/SurrogateForCyclicalReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurrogateForCyclicalReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
