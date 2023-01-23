#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_DEFINED)
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_DEFINED
struct DestroyWhenOutsideActiveBoundaries__Class;
struct DestroyWhenOutsideActiveBoundaries {
    struct DestroyWhenOutsideActiveBoundaries__Class* klass;
    MonitorData* monitor;
    struct DestroyWhenOutsideActiveBoundaries__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_FWDDECL)
#define IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_FWDDECL
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_DEFINED) && !defined(IL2CPP_STRUCT_DestroyWhenOutsideActiveBoundaries_FWDDECL)
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
