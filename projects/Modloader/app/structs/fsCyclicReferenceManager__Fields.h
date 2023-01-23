#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_DEFINED
struct Dictionary_2_System_Object_System_Int32_;
struct Dictionary_2_System_Int32_System_Object_;
struct __declspec(align(8)) fsCyclicReferenceManager__Fields {
    struct Dictionary_2_System_Object_System_Int32_* _objectIds;
    int32_t _nextId;
    struct Dictionary_2_System_Int32_System_Object_* _marked;
    int32_t _depth;
};
#endif
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_FWDDECL)
#include <Modloader/app/structs/fsCyclicReferenceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsCyclicReferenceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
