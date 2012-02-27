/* List of functions defined in the module */

static PyMethodDef ct_methods[] = {

    {"phase_temperature", py_temperature,  METH_VARARGS},
    {"phase_density", py_density,  METH_VARARGS},
    {"phase_molardensity", py_molardensity,  METH_VARARGS},
    {"phase_meanmolwt", py_meanmolwt,  METH_VARARGS},
    {"phase_molefraction", py_molefraction,  METH_VARARGS},
    {"phase_massfraction", py_massfraction,  METH_VARARGS},
    {"phase_nelements", py_nelements,  METH_VARARGS},
    {"phase_nspecies", py_nspecies,  METH_VARARGS},
    {"phase_natoms", py_natoms,  METH_VARARGS},
    //{"phase_addelement", py_addelement,  METH_VARARGS},
    {"phase_elementindex", py_elementindex,  METH_VARARGS},
    {"phase_speciesindex", py_speciesindex,  METH_VARARGS},
    {"phase_getarray", phase_getarray,  METH_VARARGS},
    {"phase_getstring", phase_getstring,  METH_VARARGS},
    {"phase_setfp", phase_setfp,  METH_VARARGS},
    {"phase_setarray", phase_setarray,  METH_VARARGS},
    {"phase_setstring", phase_setstring,  METH_VARARGS},
    {"phase_report", py_report,  METH_VARARGS},

    {"ThermoFromXML", ct_newThermoFromXML,  METH_VARARGS},
    {"thermo_delete", thermo_delete,  METH_VARARGS},
    {"thermo_mintemp", thermo_mintemp,  METH_VARARGS},
    {"thermo_maxtemp", thermo_maxtemp,  METH_VARARGS},
    {"thermo_refpressure", thermo_refpressure,  METH_VARARGS},
    {"thermo_getfp", thermo_getfp,  METH_VARARGS},
    {"thermo_setfp", thermo_setfp,  METH_VARARGS},
    {"thermo_getarray", thermo_getarray,  METH_VARARGS},
    {"thermo_equil", thermo_equil,  METH_VARARGS},
    {"thermo_import_xml", thermo_import,  METH_VARARGS},

    {"xml_attrib", py_xml_attrib, METH_VARARGS},
    {"xml_addAttrib", py_xml_addAttrib, METH_VARARGS},
    {"xml_addComment", py_xml_addComment, METH_VARARGS},
    {"xml_tag", py_xml_tag, METH_VARARGS},
    {"xml_value", py_xml_value, METH_VARARGS},
    {"xml_new", py_xml_new, METH_VARARGS},
    {"xml_get_XML_File", py_xml_get_XML_File, METH_VARARGS},
    {"xml_del", py_xml_del, METH_VARARGS},
    {"xml_clear", py_xml_clear, METH_VARARGS},
    {"xml_child", py_xml_child, METH_VARARGS},
    {"xml_childbynumber", py_xml_childbynumber, METH_VARARGS},
    {"xml_findID", py_xml_findID, METH_VARARGS},
    {"xml_findByName", py_xml_findByName, METH_VARARGS},
    {"xml_nChildren", py_xml_nChildren, METH_VARARGS},
    {"xml_addChild", py_xml_addChild, METH_VARARGS},
    {"xml_addChildNode", py_xml_addChildNode, METH_VARARGS},
    {"xml_removeChild", py_xml_removeChild, METH_VARARGS},
    {"xml_write", py_xml_write, METH_VARARGS},
    {"ctml_getFloatArray", py_ctml_getFloatArray, METH_VARARGS},

    {"KineticsFromXML", kin_newFromXML,  METH_VARARGS},
    {"kin_delete", kin_delete,  METH_VARARGS},
    {"kin_nspecies", kin_nspecies,  METH_VARARGS},
    {"kin_nreactions", kin_nrxns,  METH_VARARGS},
    {"kin_nPhases", kin_nPhases,  METH_VARARGS},
    {"kin_phaseIndex", kin_phaseIndex,  METH_VARARGS},
    {"kin_reactionPhaseIndex", kin_reactionPhaseIndex,  METH_VARARGS},
    {"kin_isreversible", kin_isrev,  METH_VARARGS},
    {"kin_rstoichcoeff", kin_rstoichcoeff,  METH_VARARGS},
    {"kin_pstoichcoeff", kin_pstoichcoeff,  METH_VARARGS},
    {"kin_rxntype", kin_rxntype,  METH_VARARGS},
    {"kin_type", kin_type,  METH_VARARGS},
    {"kin_start", kin_start,  METH_VARARGS},
    {"kin_multiplier", kin_multiplier,  METH_VARARGS},
    {"kin_setMultiplier", kin_setMultiplier,  METH_VARARGS},
    {"kin_speciesIndex", kin_speciesIndex,  METH_VARARGS},
    {"kin_getarray", kin_getarray,  METH_VARARGS},
    {"kin_getstring", kin_getstring,  METH_VARARGS},
    {"kin_phase", kin_phase,  METH_VARARGS},
    {"kin_advanceCoverages", kin_advanceCoverages,  METH_VARARGS},

    {"Transport", py_transport_new,  METH_VARARGS},
    {"tran_delete", py_transport_delete,  METH_VARARGS},
    {"tran_viscosity", py_viscosity,  METH_VARARGS},
    {"tran_thermalConductivity", py_thermalConductivity,  METH_VARARGS},
    {"tran_thermalDiffCoeffs", py_thermalDiffCoeffs,  METH_VARARGS},
    {"tran_binaryDiffCoeffs", py_binaryDiffCoeffs,  METH_VARARGS},
    {"tran_mixDiffCoeffs", py_mixDiffCoeffs,  METH_VARARGS},
    {"tran_multiDiffCoeffs", py_multiDiffCoeffs,  METH_VARARGS},
    {"tran_setParameters", py_setParameters,  METH_VARARGS},
    {"tran_getMolarFluxes", py_getMolarFluxes,  METH_VARARGS},
    {"tran_getMassFluxes", py_getMassFluxes,  METH_VARARGS},

    {"get_Cantera_Error", ct_get_cantera_error,  METH_VARARGS},
    //{"ct_print", ct_print,  METH_VARARGS},
    {"ct_addDirectory", ct_addDirectory, METH_VARARGS},
    {"ct_refcnt", ct_refcnt,  METH_VARARGS},
    {"ct_ck2cti", ct_ck2cti,  METH_VARARGS},
    {"ct_writelogfile", ct_writelogfile,  METH_VARARGS},
    //{"readlog", ct_readlog,  METH_VARARGS},
    //{"buildSolutionFromXML", ct_buildSolutionFromXML, METH_VARARGS},

    {"domain_clear", py_domain_clear, METH_VARARGS},
    {"domain_del", py_domain_del, METH_VARARGS},
    {"domain_type", py_domain_type, METH_VARARGS},
    {"domain_index", py_domain_index, METH_VARARGS},
    {"domain_nComponents", py_domain_nComponents, METH_VARARGS},
    {"domain_nPoints", py_domain_nPoints, METH_VARARGS},
    {"domain_componentName", py_domain_componentName, METH_VARARGS},
    {"domain_componentIndex", py_domain_componentIndex, METH_VARARGS},
    {"domain_setBounds", py_domain_setBounds, METH_VARARGS},
    {"domain_lowerBound", py_domain_lowerBound, METH_VARARGS},
    {"domain_upperBound", py_domain_upperBound, METH_VARARGS},
    {"domain_setTolerances", py_domain_setTolerances, METH_VARARGS},
    {"domain_rtol", py_domain_rtol, METH_VARARGS},
    {"domain_atol", py_domain_atol, METH_VARARGS},
    {"domain_setupGrid", py_domain_setupGrid, METH_VARARGS},
    {"domain_setID", py_domain_setID, METH_VARARGS},
    {"domain_setDesc", py_domain_setDesc, METH_VARARGS},
    {"domain_grid", py_domain_grid, METH_VARARGS},
    {"bdry_setMdot", py_bdry_setMdot, METH_VARARGS},
    {"bdry_setTemperature", py_bdry_setTemperature, METH_VARARGS},
    {"bdry_setMoleFractions", py_bdry_setMoleFractions, METH_VARARGS},
    {"bdry_temperature", py_bdry_temperature, METH_VARARGS},
    {"bdry_massFraction", py_bdry_massFraction, METH_VARARGS},
    {"bdry_mdot", py_bdry_mdot, METH_VARARGS},
    {"inlet_setSpreadRate", py_inlet_setSpreadRate, METH_VARARGS},
    {"reactingsurf_setkineticsmgr", py_reactingsurf_setkineticsmgr, METH_VARARGS},
    {"reactingsurf_enableCoverageEqs", py_reactingsurf_enableCoverageEqs, METH_VARARGS},
    {"inlet_new", py_inlet_new, METH_VARARGS},
    {"outlet_new", py_outlet_new, METH_VARARGS},
    {"outletres_new", py_outletres_new, METH_VARARGS},
    {"symm_new", py_symm_new, METH_VARARGS},
    {"surf_new", py_surf_new, METH_VARARGS},
    {"reactingsurf_new", py_reactingsurf_new, METH_VARARGS},
    {"stflow_new", py_stflow_new, METH_VARARGS},
    {"stflow_setPressure", py_stflow_setPressure, METH_VARARGS},
    {"stflow_setTransport", py_stflow_setTransport, METH_VARARGS},
    {"stflow_enableSoret", py_stflow_enableSoret, METH_VARARGS},
    {"stflow_setFixedTempProfile", py_stflow_setFixedTempProfile, METH_VARARGS},
    {"stflow_solveSpeciesEqs", py_stflow_solveSpeciesEqs, METH_VARARGS},
    {"stflow_solveEnergyEqn", py_stflow_solveEnergyEqn, METH_VARARGS},
    {"sim1D_clear", py_sim1D_clear, METH_VARARGS},
    {"sim1D_new", py_sim1D_new, METH_VARARGS},
    {"sim1D_del", py_sim1D_del, METH_VARARGS},
    {"sim1D_setValue", py_sim1D_setValue, METH_VARARGS},
    {"sim1D_setProfile", py_sim1D_setProfile, METH_VARARGS},
    {"sim1D_setFlatProfile", py_sim1D_setFlatProfile, METH_VARARGS},
    {"sim1D_showSolution", py_sim1D_showSolution, METH_VARARGS},
    {"sim1D_setTimeStep", py_sim1D_setTimeStep, METH_VARARGS},
    {"sim1D_getInitialSoln", py_sim1D_getInitialSoln, METH_VARARGS},
    {"sim1D_solve", py_sim1D_solve, METH_VARARGS},
    {"sim1D_refine", py_sim1D_refine, METH_VARARGS},
    {"sim1D_setRefineCriteria", py_sim1D_setRefineCriteria, METH_VARARGS},
    {"sim1D_save", py_sim1D_save, METH_VARARGS},
    {"sim1D_restore", py_sim1D_restore, METH_VARARGS},
    {"sim1D_writeStats", py_sim1D_writeStats, METH_VARARGS},
    {"sim1D_domainIndex", py_sim1D_domainIndex, METH_VARARGS},
    {"sim1D_value", py_sim1D_value, METH_VARARGS},
    {"sim1D_workValue", py_sim1D_workValue, METH_VARARGS},
    {"sim1D_eval", py_sim1D_eval, METH_VARARGS},
    {"sim1D_setMaxJacAge", py_sim1D_setMaxJacAge, METH_VARARGS},
    {"sim1D_timeStepFactor", py_sim1D_timeStepFactor, METH_VARARGS},
    {"sim1D_setTimeStepLimits", py_sim1D_setTimeStepLimits, METH_VARARGS},
    {"sim1D_setFixedTemperature", py_sim1D_setFixedTemperature, METH_VARARGS},

    {"surf_setsitedensity", py_surf_setsitedensity,  METH_VARARGS},
    {"surf_sitedensity", py_surf_sitedensity,  METH_VARARGS},
    {"surf_setcoverages", py_surf_setcoverages,  METH_VARARGS},
    {"surf_getcoverages", py_surf_getcoverages,  METH_VARARGS},
    {"surf_setconcentrations", py_surf_setconcentrations,  METH_VARARGS},
    {"surf_getconcentrations", py_surf_getconcentrations,  METH_VARARGS},

    {"rdiag_setDashedColor", py_rdiag_setDashedColor, METH_VARARGS},
    {"rbuild_new", py_rbuild_new, METH_VARARGS},
    {"rdiag_write", py_rdiag_write, METH_VARARGS},
    {"rdiag_setDotOptions", py_rdiag_setDotOptions, METH_VARARGS},
    {"rdiag_setScale", py_rdiag_setScale, METH_VARARGS},
    {"rdiag_setTitle", py_rdiag_setTitle, METH_VARARGS},
    {"rdiag_setArrowWidth", py_rdiag_setArrowWidth, METH_VARARGS},
    {"rdiag_displayOnly", py_rdiag_displayOnly, METH_VARARGS},
    {"rdiag_setThreshold", py_rdiag_setThreshold, METH_VARARGS},
    {"rdiag_setBoldThreshold", py_rdiag_setBoldThreshold, METH_VARARGS},
    {"rdiag_setFont", py_rdiag_setFont, METH_VARARGS},
    {"rdiag_new", py_rdiag_new, METH_VARARGS},
    {"rdiag_del", py_rdiag_del, METH_VARARGS},
    {"rdiag_detailed", py_rdiag_detailed, METH_VARARGS},
    {"rdiag_add", py_rdiag_add, METH_VARARGS},
    {"rdiag_findMajor", py_rdiag_findMajor, METH_VARARGS},
    {"rbuild_build", py_rbuild_build, METH_VARARGS},
    {"rdiag_setNormalThreshold", py_rdiag_setNormalThreshold, METH_VARARGS},
    {"rdiag_brief", py_rdiag_brief, METH_VARARGS},
    {"rbuild_del", py_rbuild_del, METH_VARARGS},
    {"rdiag_setNormalColor", py_rdiag_setNormalColor, METH_VARARGS},
    {"rbuild_init", py_rbuild_init, METH_VARARGS},
    {"rdiag_setBoldColor", py_rdiag_setBoldColor, METH_VARARGS},
    {"rdiag_setFlowType", py_rdiag_setFlowType, METH_VARARGS},
    {"rdiag_setLabelThreshold", py_rdiag_setLabelThreshold, METH_VARARGS},

    //     {"bndry_temperature", py_bndry_temperature, METH_VARARGS},
    //     {"bndry_setxin", py_bndry_setxin, METH_VARARGS},
    //     {"bndry_setxinbyname", py_bndry_setxinbyname, METH_VARARGS},
    //     {"bndry_settemperature", py_bndry_settemperature, METH_VARARGS},
    //     {"bndry_setspreadrate", py_bndry_setspreadrate, METH_VARARGS},
    //     {"bndry_new", py_bndry_new, METH_VARARGS},
    //     {"bndry_del", py_bndry_del, METH_VARARGS},
    //     {"bndry_mdot", py_bndry_mdot, METH_VARARGS},
    //     {"bndry_setmdot", py_bndry_setmdot, METH_VARARGS},

    {"flowdev_ready", py_flowdev_ready, METH_VARARGS},
    //{"reactor_setInitialTime", py_reactor_setInitialTime, METH_VARARGS},
    {"reactornet_setInitialTime", py_reactornet_setInitialTime, METH_VARARGS},
    {"reactornet_setTolerances", py_reactornet_setTolerances, METH_VARARGS},
    {"reactornet_setSensitivityTolerances", py_reactornet_setSensitivityTolerances, METH_VARARGS},
    {"flowdev_new", py_flowdev_new, METH_VARARGS},
    {"flowdev_massFlowRate", py_flowdev_massFlowRate, METH_VARARGS},
    {"flowdev_del", py_flowdev_del, METH_VARARGS},
    //    {"flowdev_setpoint", py_flowdev_setpoint, METH_VARARGS},
    {"reactor_temperature", py_reactor_temperature, METH_VARARGS},
    {"flowdev_setMassFlowRate", py_flowdev_setMassFlowRate, METH_VARARGS},
    {"flowdev_install", py_flowdev_install, METH_VARARGS},
    {"flowdev_setMaster", py_flowdev_setMaster, METH_VARARGS},
    {"reactor_setThermoMgr", py_reactor_setThermoMgr, METH_VARARGS},
    {"reactor_setEnergy", py_reactor_setEnergy, METH_VARARGS},
    {"reactor_volume", py_reactor_volume, METH_VARARGS},
    //{"reactor_time", py_reactor_time, METH_VARARGS},
    {"reactornet_time", py_reactornet_time, METH_VARARGS},
    //    {"reactor_advance", py_reactor_advance, METH_VARARGS},
    //{"reactor_step", py_reactor_step, METH_VARARGS},
    {"reactornet_addreactor", py_reactornet_addreactor, METH_VARARGS},
    {"reactornet_advance", py_reactornet_advance, METH_VARARGS},
    {"reactornet_step", py_reactornet_step, METH_VARARGS},
    {"flowdev_setParameters", py_flowdev_setParameters, METH_VARARGS},
    {"flowdev_setFunction", py_flowdev_setFunction, METH_VARARGS},
    {"reactor_mass", py_reactor_mass, METH_VARARGS},
    {"reactor_new", py_reactor_new, METH_VARARGS},
    {"reactornet_new", py_reactornet_new, METH_VARARGS},
    {"reactor_enthalpy_mass", py_reactor_enthalpy_mass, METH_VARARGS},
    {"reactor_pressure", py_reactor_pressure, METH_VARARGS},
    {"reactor_setInitialVolume", py_reactor_setInitialVolume, METH_VARARGS},
    {"reactor_density", py_reactor_density, METH_VARARGS},
    {"reactor_setKineticsMgr", py_reactor_setKineticsMgr, METH_VARARGS},
    {"reactor_del", py_reactor_del, METH_VARARGS},
    {"reactornet_del", py_reactornet_del, METH_VARARGS},
    {"reactor_intEnergy_mass", py_reactor_intEnergy_mass, METH_VARARGS},
    {"reactor_massFraction", py_reactor_massFraction, METH_VARARGS},
    {"reactor_nSensParams", py_reactor_nSensParams, METH_VARARGS},
    {"reactor_addSensitivityReaction", py_reactor_addSensitivityReaction, METH_VARARGS},
    {"flowReactor_setMassFlowRate", py_flowReactor_setMassFlowRate, METH_VARARGS},
    {"reactornet_rtol", py_reactornet_rtol, METH_VARARGS},
    {"reactornet_atol", py_reactornet_atol, METH_VARARGS},
    {"reactornet_sensitivity", py_reactornet_sensitivity, METH_VARARGS},
    {"wall_install", py_wall_install, METH_VARARGS},
    {"wall_setkinetics", py_wall_setkinetics, METH_VARARGS},
    {"wall_area", py_wall_area, METH_VARARGS},
    {"wall_setArea", py_wall_setArea, METH_VARARGS},
    {"wall_setThermalResistance", py_wall_setThermalResistance, METH_VARARGS},
    {"wall_setHeatTransferCoeff", py_wall_setHeatTransferCoeff, METH_VARARGS},
    {"wall_setHeatFlux", py_wall_setHeatFlux, METH_VARARGS},
    {"wall_Q", py_wall_Q, METH_VARARGS},
    {"wall_new", py_wall_new, METH_VARARGS},
    {"wall_vdot", py_wall_vdot, METH_VARARGS},
    {"wall_del", py_wall_del, METH_VARARGS},
    {"wall_setVelocity", py_wall_setVelocity, METH_VARARGS},
    {"wall_setEmissivity", py_wall_setEmissivity, METH_VARARGS},
    {"wall_setExpansionRateCoeff", py_wall_setExpansionRateCoeff, METH_VARARGS},
    {"wall_ready", py_wall_ready, METH_VARARGS},
    {"wall_addSensitivityReaction", py_wall_addSensitivityReaction, METH_VARARGS},

    {"func_new", py_func_new, METH_VARARGS},
    {"func_newcombo", py_func_newcombo, METH_VARARGS},
    {"func_derivative", py_func_derivative, METH_VARARGS},
    {"func_del", py_func_del, METH_VARARGS},
    {"func_value", py_func_value, METH_VARARGS},
    {"func_write", py_func_write, METH_VARARGS},

    {"mix_new", py_mix_new, METH_VARARGS},
    {"mix_del", py_mix_del, METH_VARARGS},
    {"mix_addPhase", py_mix_addPhase, METH_VARARGS},
    {"mix_init", py_mix_init, METH_VARARGS},
    {"mix_nElements", py_mix_nElements, METH_VARARGS},
    {"mix_elementIndex", py_mix_elementIndex, METH_VARARGS},
    {"mix_speciesIndex", py_mix_speciesIndex, METH_VARARGS},
    {"mix_nSpecies", py_mix_nSpecies, METH_VARARGS},
    {"mix_nAtoms", py_mix_nAtoms, METH_VARARGS},
    {"mix_setTemperature", py_mix_setTemperature, METH_VARARGS},
    {"mix_temperature", py_mix_temperature, METH_VARARGS},
    {"mix_minTemp", py_mix_minTemp, METH_VARARGS},
    {"mix_maxTemp", py_mix_maxTemp, METH_VARARGS},
    {"mix_charge", py_mix_charge, METH_VARARGS},
    {"mix_phaseCharge", py_mix_phaseCharge, METH_VARARGS},
    {"mix_setPressure", py_mix_setPressure, METH_VARARGS},
    {"mix_pressure", py_mix_pressure, METH_VARARGS},
    {"mix_phaseMoles", py_mix_phaseMoles, METH_VARARGS},
    {"mix_setPhaseMoles", py_mix_setPhaseMoles, METH_VARARGS},
    {"mix_setMoles", py_mix_setMoles, METH_VARARGS},
    {"mix_setMolesByName", py_mix_setMolesByName, METH_VARARGS},
    {"mix_speciesMoles", py_mix_speciesMoles, METH_VARARGS},
    {"mix_elementMoles", py_mix_elementMoles, METH_VARARGS},
    {"mix_equilibrate", py_mix_equilibrate, METH_VARARGS},
    {"mix_vcs_equilibrate", py_mix_vcs_equilibrate, METH_VARARGS},
    {"mix_getChemPotentials", py_mix_getChemPotentials, METH_VARARGS},

    {"ct_appdelete", pyct_appdelete, METH_VARARGS},

#ifdef INCL_USER_PYTHON
#include "usermethods.h"
#endif

    {NULL,  NULL}		   /* sentinel */
};
