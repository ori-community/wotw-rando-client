#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateValueGroup__Fields_DEFINED
struct UberID;
struct Dictionary_2_Moon_UberID_System_Object_;
struct Dictionary_2_Moon_UberID_System_Boolean_;
struct Dictionary_2_Moon_UberID_System_Single_;
struct Dictionary_2_Moon_UberID_System_Int32_;
struct Dictionary_2_Moon_UberID_System_Byte_;
struct __declspec(align(8)) UberStateValueGroup__Fields {
    int32_t UBER_STATE_GROUP_VERSION;
    struct UberID* m_id;
    struct Dictionary_2_Moon_UberID_System_Object_* m_objectStateMap;
    struct Dictionary_2_Moon_UberID_System_Boolean_* m_boolStateMap;
    struct Dictionary_2_Moon_UberID_System_Single_* m_floatStateMap;
    struct Dictionary_2_Moon_UberID_System_Int32_* m_intStateMap;
    struct Dictionary_2_Moon_UberID_System_Byte_* m_byteStateMap;
    bool m_isDirty;
    int64_t m_dataSize;
    bool m_isInitialized;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueGroup__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Byte_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Single_.h>
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_UberStateValueGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueGroup__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateValueGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
